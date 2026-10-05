#include "bench/fib.hpp"

// RE Benchmark TU 9954 of 20000 (depth=28, stamp="default")
namespace bench_tu_9954 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9954>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9954
