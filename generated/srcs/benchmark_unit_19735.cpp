#include "bench/fib.hpp"

// RE Benchmark TU 19735 of 20000 (depth=28, stamp="default")
namespace bench_tu_19735 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19735>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19735
