#include "bench/fib.hpp"

// RE Benchmark TU 837 of 20000 (depth=28, stamp="default")
namespace bench_tu_837 {
constexpr unsigned long long result = ::bench::slow_fib<28, 837>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_837
