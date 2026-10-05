#include "bench/fib.hpp"

// RE Benchmark TU 732 of 20000 (depth=28, stamp="default")
namespace bench_tu_732 {
constexpr unsigned long long result = ::bench::slow_fib<28, 732>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_732
