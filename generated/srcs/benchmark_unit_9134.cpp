#include "bench/fib.hpp"

// RE Benchmark TU 9134 of 20000 (depth=28, stamp="default")
namespace bench_tu_9134 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9134>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9134
