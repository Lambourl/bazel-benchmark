#include "bench/fib.hpp"

// RE Benchmark TU 12141 of 20000 (depth=28, stamp="default")
namespace bench_tu_12141 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12141>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12141
