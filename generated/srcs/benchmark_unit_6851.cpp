#include "bench/fib.hpp"

// RE Benchmark TU 6851 of 20000 (depth=28, stamp="default")
namespace bench_tu_6851 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6851>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6851
