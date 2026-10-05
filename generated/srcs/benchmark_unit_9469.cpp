#include "bench/fib.hpp"

// RE Benchmark TU 9469 of 20000 (depth=28, stamp="default")
namespace bench_tu_9469 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9469>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9469
